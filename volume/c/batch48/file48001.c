// fichero 48001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48001;

Registro48001 crear_registro48001(int id) {
    Registro48001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
