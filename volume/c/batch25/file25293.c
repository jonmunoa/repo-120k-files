// fichero 25293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25293;

Registro25293 crear_registro25293(int id) {
    Registro25293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
