// fichero 36097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36097;

Registro36097 crear_registro36097(int id) {
    Registro36097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
