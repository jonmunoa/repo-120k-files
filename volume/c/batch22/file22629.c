// fichero 22629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22629;

Registro22629 crear_registro22629(int id) {
    Registro22629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
