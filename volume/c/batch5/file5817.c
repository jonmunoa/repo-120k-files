// fichero 5817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5817;

Registro5817 crear_registro5817(int id) {
    Registro5817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
