// fichero 4933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4933;

Registro4933 crear_registro4933(int id) {
    Registro4933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
