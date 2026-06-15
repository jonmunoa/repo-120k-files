// fichero 5573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5573;

Registro5573 crear_registro5573(int id) {
    Registro5573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
