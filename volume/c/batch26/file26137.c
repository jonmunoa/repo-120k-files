// fichero 26137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26137;

Registro26137 crear_registro26137(int id) {
    Registro26137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
