// fichero 18581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18581;

Registro18581 crear_registro18581(int id) {
    Registro18581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
