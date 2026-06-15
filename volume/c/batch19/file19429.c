// fichero 19429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19429;

Registro19429 crear_registro19429(int id) {
    Registro19429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
