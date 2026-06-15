// fichero 15089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15089;

Registro15089 crear_registro15089(int id) {
    Registro15089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
