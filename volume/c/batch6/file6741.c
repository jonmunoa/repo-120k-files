// fichero 6741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6741;

Registro6741 crear_registro6741(int id) {
    Registro6741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
