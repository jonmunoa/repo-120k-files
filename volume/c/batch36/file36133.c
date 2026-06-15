// fichero 36133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36133;

Registro36133 crear_registro36133(int id) {
    Registro36133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
