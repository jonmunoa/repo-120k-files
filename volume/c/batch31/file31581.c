// fichero 31581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31581;

Registro31581 crear_registro31581(int id) {
    Registro31581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
