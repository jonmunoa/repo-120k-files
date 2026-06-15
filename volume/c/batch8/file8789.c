// fichero 8789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8789;

Registro8789 crear_registro8789(int id) {
    Registro8789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
