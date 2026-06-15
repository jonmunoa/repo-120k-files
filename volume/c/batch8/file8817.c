// fichero 8817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8817;

Registro8817 crear_registro8817(int id) {
    Registro8817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
