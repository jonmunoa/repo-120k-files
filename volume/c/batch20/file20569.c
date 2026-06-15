// fichero 20569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20569;

Registro20569 crear_registro20569(int id) {
    Registro20569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
