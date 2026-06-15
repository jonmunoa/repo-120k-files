// fichero 25509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25509;

Registro25509 crear_registro25509(int id) {
    Registro25509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
