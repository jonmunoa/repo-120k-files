// fichero 18521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18521;

Registro18521 crear_registro18521(int id) {
    Registro18521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
