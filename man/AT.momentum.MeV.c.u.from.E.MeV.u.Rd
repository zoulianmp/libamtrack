% TODO File path/AT.momentum.MeV.c.u.from.E.MeV.u.Rd
\name{AT.momentum.MeV.c.u.from.E.MeV.u}
\alias{AT.momentum.MeV.c.u.from.E.MeV.u}
\title{AT.momentum.MeV.c.u.from.E.MeV.u}
\description{Returns relativistic momenta per nucleon for particles with given
 kinetic energy
}
\usage{AT.momentum.MeV.c.u.from.E.MeV.u(E.MeV.u)
}
\arguments{
  \item{E.MeV.u}{ kinetic energy per nucleon (array of size n) (see also
 \code{\link{E.MeV.u}}).}
}
\value{
% TODO proper return definition of lists!!! ADD
% NUMBER_OF_FIELD_COMPONENT_DESCRIBTION AGAIN!!!)
  \item{momentum.MeV.c}{ momentum per nucleon (array of size n)}
  \item{return}{return}
}
\seealso{
View the C source code here:
\url{http://sourceforge.net/apps/trac/libamtrack/browser/tags/0.6.2/src/AT_Phy
sicsRoutines.c#L289}
}
\examples{
# Relation between kinetic proton energy and momentum
# in relativistic and non-relativistic regime
E.MeV.u     <- 10^seq(-2, 5, length.out = 100)
df          <- data.frame( E.MeV          = E.MeV.u,
                           p.MeV.c        =
 AT.momentum.MeV.c.u.from.E.MeV.u(E.MeV.u)$momentum.MeV.c)
}
