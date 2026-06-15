// fichero 19881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19881;

Registro19881 crear_registro19881(int id) {
    Registro19881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
