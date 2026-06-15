// fichero 49029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49029;

Registro49029 crear_registro49029(int id) {
    Registro49029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
