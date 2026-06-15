// fichero 30813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30813;

Registro30813 crear_registro30813(int id) {
    Registro30813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
