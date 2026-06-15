// fichero 43797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43797;

Registro43797 crear_registro43797(int id) {
    Registro43797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
