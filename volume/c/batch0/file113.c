// fichero 113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro113;

Registro113 crear_registro113(int id) {
    Registro113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
