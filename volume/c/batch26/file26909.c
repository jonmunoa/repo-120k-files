// fichero 26909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26909;

Registro26909 crear_registro26909(int id) {
    Registro26909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
