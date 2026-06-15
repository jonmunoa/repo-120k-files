// fichero 37513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37513;

Registro37513 crear_registro37513(int id) {
    Registro37513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
