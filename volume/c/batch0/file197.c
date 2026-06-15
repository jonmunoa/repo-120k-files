// fichero 197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro197;

Registro197 crear_registro197(int id) {
    Registro197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
