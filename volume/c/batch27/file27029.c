// fichero 27029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27029;

Registro27029 crear_registro27029(int id) {
    Registro27029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
