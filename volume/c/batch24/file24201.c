// fichero 24201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24201;

Registro24201 crear_registro24201(int id) {
    Registro24201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
