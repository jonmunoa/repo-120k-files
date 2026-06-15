// fichero 15673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15673;

Registro15673 crear_registro15673(int id) {
    Registro15673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
