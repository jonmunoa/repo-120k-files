// fichero 30949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30949;

Registro30949 crear_registro30949(int id) {
    Registro30949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
