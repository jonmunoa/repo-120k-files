// fichero 8089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8089;

Registro8089 crear_registro8089(int id) {
    Registro8089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
