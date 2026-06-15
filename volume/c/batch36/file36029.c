// fichero 36029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36029;

Registro36029 crear_registro36029(int id) {
    Registro36029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
