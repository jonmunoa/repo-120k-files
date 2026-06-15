// fichero 36385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36385;

Registro36385 crear_registro36385(int id) {
    Registro36385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
