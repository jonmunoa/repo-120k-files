// fichero 38173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38173;

Registro38173 crear_registro38173(int id) {
    Registro38173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
