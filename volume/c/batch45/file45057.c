// fichero 45057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45057;

Registro45057 crear_registro45057(int id) {
    Registro45057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
