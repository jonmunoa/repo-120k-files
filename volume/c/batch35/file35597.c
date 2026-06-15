// fichero 35597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35597;

Registro35597 crear_registro35597(int id) {
    Registro35597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
