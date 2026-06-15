// fichero 47173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47173;

Registro47173 crear_registro47173(int id) {
    Registro47173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
