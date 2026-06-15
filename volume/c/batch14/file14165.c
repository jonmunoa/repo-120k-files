// fichero 14165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14165;

Registro14165 crear_registro14165(int id) {
    Registro14165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
