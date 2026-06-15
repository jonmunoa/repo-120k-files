// fichero 24197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24197;

Registro24197 crear_registro24197(int id) {
    Registro24197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
