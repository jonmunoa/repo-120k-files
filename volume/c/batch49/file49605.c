// fichero 49605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49605;

Registro49605 crear_registro49605(int id) {
    Registro49605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
