// fichero 26173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26173;

Registro26173 crear_registro26173(int id) {
    Registro26173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
