// fichero 38197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38197;

Registro38197 crear_registro38197(int id) {
    Registro38197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
