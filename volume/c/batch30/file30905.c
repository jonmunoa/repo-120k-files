// fichero 30905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30905;

Registro30905 crear_registro30905(int id) {
    Registro30905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
