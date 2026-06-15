// fichero 39929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39929;

Registro39929 crear_registro39929(int id) {
    Registro39929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
