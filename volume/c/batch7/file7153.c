// fichero 7153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7153;

Registro7153 crear_registro7153(int id) {
    Registro7153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
