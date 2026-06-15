// fichero 11089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11089;

Registro11089 crear_registro11089(int id) {
    Registro11089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
