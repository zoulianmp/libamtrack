\name{AT.SPC.export.DEDX}
\alias{AT.SPC.export.DEDX}
\title{AT.SPC.export.DEDX}
\description{Creates stopping power data tables from libamtrack and exports
 them in TRiP98 compatible format. For the DEDX format, see M. Kr\"amer's
 TRiP98 documentation:
 \url{http://bio.gsi.de/DOCS/TRiP98BEAM/DOCS/trip98fmtdedx.html}. N.B. check
 the resulting data carefully for NAs, as not all stopping power data sources
 might cover the energy grid requested.}
\usage{AT.SPC.export.DEDX(stopping.power.source.no, file.name.DEDX = NULL,
 element.names = NULL, energy.MeV.u = NULL, plot = TRUE, write = TRUE)}
\arguments{
  \item{stopping.power.source.no}{ index of stopping power data source, see
 also \link{stopping.power.source.no}.}
  \item{file.name.DEDX}{ path and file name for DEDX data, if not given
 \code{libamtrack.dedx} will be used.}
  \item{element.names}{ elements to be used (see \link{particle.no}), if not
 given the ICRU49/73 elements H...Ar will be used.}
  \item{energy.MeV.u}{ energy grid, if not given the ICRU49/73 standard
 (0.025...1000 MeV/u in 51 steps) will be used.}
  \item{plot}{ if true, the resulting data will be plotted.}
  \item{write}{ if true, the resulting data will be exported in TRiP98 format.}
}
\value{
  A data frame containing the stopping power data
}
