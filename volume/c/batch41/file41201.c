// fichero 41201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41201;

Registro41201 crear_registro41201(int id) {
    Registro41201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
