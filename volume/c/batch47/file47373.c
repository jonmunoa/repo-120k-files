// fichero 47373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47373;

Registro47373 crear_registro47373(int id) {
    Registro47373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
