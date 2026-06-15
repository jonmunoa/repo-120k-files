// fichero 41029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41029;

Registro41029 crear_registro41029(int id) {
    Registro41029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
