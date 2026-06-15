// fichero 25493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25493;

Registro25493 crear_registro25493(int id) {
    Registro25493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
