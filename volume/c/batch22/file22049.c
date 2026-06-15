// fichero 22049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22049;

Registro22049 crear_registro22049(int id) {
    Registro22049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
