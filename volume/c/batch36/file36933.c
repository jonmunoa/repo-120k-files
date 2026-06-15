// fichero 36933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36933;

Registro36933 crear_registro36933(int id) {
    Registro36933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
