// fichero 10909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10909;

Registro10909 crear_registro10909(int id) {
    Registro10909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
