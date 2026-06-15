// fichero 30173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30173;

Registro30173 crear_registro30173(int id) {
    Registro30173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
