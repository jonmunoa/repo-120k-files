// fichero 30089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30089;

Registro30089 crear_registro30089(int id) {
    Registro30089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
