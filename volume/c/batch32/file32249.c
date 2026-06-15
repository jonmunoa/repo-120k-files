// fichero 32249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32249;

Registro32249 crear_registro32249(int id) {
    Registro32249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
