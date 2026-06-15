// fichero 16533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16533;

Registro16533 crear_registro16533(int id) {
    Registro16533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
