// fichero 36937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36937;

Registro36937 crear_registro36937(int id) {
    Registro36937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
