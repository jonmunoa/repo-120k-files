// fichero 32089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32089;

Registro32089 crear_registro32089(int id) {
    Registro32089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
