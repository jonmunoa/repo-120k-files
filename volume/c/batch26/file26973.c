// fichero 26973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26973;

Registro26973 crear_registro26973(int id) {
    Registro26973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
