// fichero 23513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23513;

Registro23513 crear_registro23513(int id) {
    Registro23513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
