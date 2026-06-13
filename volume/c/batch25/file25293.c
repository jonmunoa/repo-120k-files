// fichero 25293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25293;

Registro25293 crear_registro25293(int id) {
    Registro25293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25293(Registro25293 r) {
    return r.valor + r.id;
}
