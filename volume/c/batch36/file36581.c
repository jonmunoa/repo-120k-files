// fichero 36581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36581;

Registro36581 crear_registro36581(int id) {
    Registro36581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
