// fichero 38249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38249;

Registro38249 crear_registro38249(int id) {
    Registro38249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
