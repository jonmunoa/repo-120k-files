// fichero 24765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24765;

Registro24765 crear_registro24765(int id) {
    Registro24765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
