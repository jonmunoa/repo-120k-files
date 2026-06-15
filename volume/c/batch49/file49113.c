// fichero 49113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49113;

Registro49113 crear_registro49113(int id) {
    Registro49113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
