// fichero 49125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49125;

Registro49125 crear_registro49125(int id) {
    Registro49125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
