// fichero 11053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11053;

Registro11053 crear_registro11053(int id) {
    Registro11053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
