// fichero 48241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48241;

Registro48241 crear_registro48241(int id) {
    Registro48241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
