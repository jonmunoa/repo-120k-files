// fichero 27385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27385;

Registro27385 crear_registro27385(int id) {
    Registro27385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
