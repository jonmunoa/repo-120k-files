// fichero 14821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14821;

Registro14821 crear_registro14821(int id) {
    Registro14821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
