// fichero 24685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24685;

Registro24685 crear_registro24685(int id) {
    Registro24685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
