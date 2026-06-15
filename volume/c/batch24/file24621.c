// fichero 24621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24621;

Registro24621 crear_registro24621(int id) {
    Registro24621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
