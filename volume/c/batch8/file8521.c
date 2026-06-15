// fichero 8521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8521;

Registro8521 crear_registro8521(int id) {
    Registro8521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
