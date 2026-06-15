// fichero 39369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39369;

Registro39369 crear_registro39369(int id) {
    Registro39369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
