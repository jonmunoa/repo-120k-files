// fichero 36597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36597;

Registro36597 crear_registro36597(int id) {
    Registro36597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
