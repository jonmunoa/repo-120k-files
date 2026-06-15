// fichero 24789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24789;

Registro24789 crear_registro24789(int id) {
    Registro24789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
