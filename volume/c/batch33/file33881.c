// fichero 33881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33881;

Registro33881 crear_registro33881(int id) {
    Registro33881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
