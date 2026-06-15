// fichero 48865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48865;

Registro48865 crear_registro48865(int id) {
    Registro48865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
