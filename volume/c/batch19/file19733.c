// fichero 19733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19733;

Registro19733 crear_registro19733(int id) {
    Registro19733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
