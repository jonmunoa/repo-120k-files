// fichero 32149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32149;

Registro32149 crear_registro32149(int id) {
    Registro32149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
