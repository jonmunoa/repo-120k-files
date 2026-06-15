// fichero 38081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38081;

Registro38081 crear_registro38081(int id) {
    Registro38081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
