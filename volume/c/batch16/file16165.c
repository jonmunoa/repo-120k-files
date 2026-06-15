// fichero 16165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16165;

Registro16165 crear_registro16165(int id) {
    Registro16165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
