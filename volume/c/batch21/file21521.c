// fichero 21521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21521;

Registro21521 crear_registro21521(int id) {
    Registro21521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
