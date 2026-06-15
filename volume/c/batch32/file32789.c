// fichero 32789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32789;

Registro32789 crear_registro32789(int id) {
    Registro32789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
