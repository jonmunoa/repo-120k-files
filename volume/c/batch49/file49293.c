// fichero 49293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49293;

Registro49293 crear_registro49293(int id) {
    Registro49293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
