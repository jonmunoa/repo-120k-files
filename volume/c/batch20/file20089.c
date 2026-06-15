// fichero 20089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20089;

Registro20089 crear_registro20089(int id) {
    Registro20089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
