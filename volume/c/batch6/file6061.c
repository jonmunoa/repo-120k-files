// fichero 6061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6061;

Registro6061 crear_registro6061(int id) {
    Registro6061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
