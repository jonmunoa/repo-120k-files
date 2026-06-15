// fichero 19033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19033;

Registro19033 crear_registro19033(int id) {
    Registro19033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
