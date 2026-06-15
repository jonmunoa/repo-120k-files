// fichero 32821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32821;

Registro32821 crear_registro32821(int id) {
    Registro32821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
