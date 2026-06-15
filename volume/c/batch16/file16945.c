// fichero 16945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16945;

Registro16945 crear_registro16945(int id) {
    Registro16945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
