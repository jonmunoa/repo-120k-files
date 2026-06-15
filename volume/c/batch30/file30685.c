// fichero 30685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30685;

Registro30685 crear_registro30685(int id) {
    Registro30685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
