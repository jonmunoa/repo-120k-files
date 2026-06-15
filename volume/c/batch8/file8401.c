// fichero 8401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8401;

Registro8401 crear_registro8401(int id) {
    Registro8401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
