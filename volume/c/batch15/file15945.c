// fichero 15945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15945;

Registro15945 crear_registro15945(int id) {
    Registro15945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
