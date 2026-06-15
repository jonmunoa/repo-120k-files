// fichero 31053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31053;

Registro31053 crear_registro31053(int id) {
    Registro31053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
