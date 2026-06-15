// fichero 39729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39729;

Registro39729 crear_registro39729(int id) {
    Registro39729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
