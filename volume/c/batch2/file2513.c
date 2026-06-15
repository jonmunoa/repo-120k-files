// fichero 2513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2513;

Registro2513 crear_registro2513(int id) {
    Registro2513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
