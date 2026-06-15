// fichero 16173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16173;

Registro16173 crear_registro16173(int id) {
    Registro16173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
