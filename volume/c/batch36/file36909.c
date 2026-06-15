// fichero 36909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36909;

Registro36909 crear_registro36909(int id) {
    Registro36909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
