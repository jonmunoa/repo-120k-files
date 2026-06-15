// fichero 30789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30789;

Registro30789 crear_registro30789(int id) {
    Registro30789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
