// fichero 45001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45001;

Registro45001 crear_registro45001(int id) {
    Registro45001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
