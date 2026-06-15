// fichero 3061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3061;

Registro3061 crear_registro3061(int id) {
    Registro3061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
