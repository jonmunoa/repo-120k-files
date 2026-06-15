// fichero 24045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24045;

Registro24045 crear_registro24045(int id) {
    Registro24045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
