// fichero 18153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18153;

Registro18153 crear_registro18153(int id) {
    Registro18153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
