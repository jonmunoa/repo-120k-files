// fichero 35861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35861;

Registro35861 crear_registro35861(int id) {
    Registro35861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
