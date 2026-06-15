// fichero 19749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19749;

Registro19749 crear_registro19749(int id) {
    Registro19749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
