// fichero 8513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8513;

Registro8513 crear_registro8513(int id) {
    Registro8513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
