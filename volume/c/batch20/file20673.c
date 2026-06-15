// fichero 20673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20673;

Registro20673 crear_registro20673(int id) {
    Registro20673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
