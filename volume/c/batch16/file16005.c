// fichero 16005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16005;

Registro16005 crear_registro16005(int id) {
    Registro16005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
