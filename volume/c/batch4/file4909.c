// fichero 4909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4909;

Registro4909 crear_registro4909(int id) {
    Registro4909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
