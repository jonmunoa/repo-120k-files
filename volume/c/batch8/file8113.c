// fichero 8113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8113;

Registro8113 crear_registro8113(int id) {
    Registro8113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
