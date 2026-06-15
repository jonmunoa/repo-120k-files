// fichero 11097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11097;

Registro11097 crear_registro11097(int id) {
    Registro11097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
