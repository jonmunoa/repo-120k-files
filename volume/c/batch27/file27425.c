// fichero 27425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27425;

Registro27425 crear_registro27425(int id) {
    Registro27425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
