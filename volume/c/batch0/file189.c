// fichero 189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro189;

Registro189 crear_registro189(int id) {
    Registro189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
