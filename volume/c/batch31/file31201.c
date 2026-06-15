// fichero 31201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31201;

Registro31201 crear_registro31201(int id) {
    Registro31201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
