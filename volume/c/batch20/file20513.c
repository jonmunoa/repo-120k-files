// fichero 20513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20513;

Registro20513 crear_registro20513(int id) {
    Registro20513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
