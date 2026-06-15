// fichero 49929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49929;

Registro49929 crear_registro49929(int id) {
    Registro49929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
