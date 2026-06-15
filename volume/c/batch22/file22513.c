// fichero 22513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22513;

Registro22513 crear_registro22513(int id) {
    Registro22513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
