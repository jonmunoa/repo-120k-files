// fichero 24645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24645;

Registro24645 crear_registro24645(int id) {
    Registro24645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
