// fichero 39513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39513;

Registro39513 crear_registro39513(int id) {
    Registro39513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
