// fichero 20825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20825;

Registro20825 crear_registro20825(int id) {
    Registro20825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
