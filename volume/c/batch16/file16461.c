// fichero 16461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16461;

Registro16461 crear_registro16461(int id) {
    Registro16461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
