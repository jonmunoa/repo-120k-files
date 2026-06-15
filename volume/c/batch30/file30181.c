// fichero 30181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30181;

Registro30181 crear_registro30181(int id) {
    Registro30181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
