// fichero 1821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1821;

Registro1821 crear_registro1821(int id) {
    Registro1821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
