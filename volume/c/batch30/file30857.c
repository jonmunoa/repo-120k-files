// fichero 30857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30857;

Registro30857 crear_registro30857(int id) {
    Registro30857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
