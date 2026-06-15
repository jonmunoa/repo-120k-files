// fichero 30161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30161;

Registro30161 crear_registro30161(int id) {
    Registro30161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
