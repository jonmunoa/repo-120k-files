// fichero 21933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21933;

Registro21933 crear_registro21933(int id) {
    Registro21933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
