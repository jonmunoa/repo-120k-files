// fichero 20425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20425;

Registro20425 crear_registro20425(int id) {
    Registro20425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
