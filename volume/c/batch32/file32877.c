// fichero 32877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32877;

Registro32877 crear_registro32877(int id) {
    Registro32877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
