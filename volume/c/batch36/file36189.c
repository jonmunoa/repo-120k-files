// fichero 36189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36189;

Registro36189 crear_registro36189(int id) {
    Registro36189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
