// fichero 33817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33817;

Registro33817 crear_registro33817(int id) {
    Registro33817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
