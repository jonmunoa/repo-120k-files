// fichero 15085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15085;

Registro15085 crear_registro15085(int id) {
    Registro15085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
