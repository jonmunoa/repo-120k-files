// fichero 24945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24945;

Registro24945 crear_registro24945(int id) {
    Registro24945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
