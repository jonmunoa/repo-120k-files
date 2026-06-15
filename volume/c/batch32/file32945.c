// fichero 32945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32945;

Registro32945 crear_registro32945(int id) {
    Registro32945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
