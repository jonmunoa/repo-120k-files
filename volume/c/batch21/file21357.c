// fichero 21357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21357;

Registro21357 crear_registro21357(int id) {
    Registro21357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
