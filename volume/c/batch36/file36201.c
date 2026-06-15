// fichero 36201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36201;

Registro36201 crear_registro36201(int id) {
    Registro36201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
