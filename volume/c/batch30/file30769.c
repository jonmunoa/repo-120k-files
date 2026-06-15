// fichero 30769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30769;

Registro30769 crear_registro30769(int id) {
    Registro30769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
