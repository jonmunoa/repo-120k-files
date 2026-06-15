// fichero 19617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19617;

Registro19617 crear_registro19617(int id) {
    Registro19617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
