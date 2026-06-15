// fichero 8665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8665;

Registro8665 crear_registro8665(int id) {
    Registro8665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
