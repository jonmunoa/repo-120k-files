// fichero 47597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47597;

Registro47597 crear_registro47597(int id) {
    Registro47597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
