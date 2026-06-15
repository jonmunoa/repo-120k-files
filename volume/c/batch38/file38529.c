// fichero 38529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38529;

Registro38529 crear_registro38529(int id) {
    Registro38529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
