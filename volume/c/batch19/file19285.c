// fichero 19285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19285;

Registro19285 crear_registro19285(int id) {
    Registro19285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
