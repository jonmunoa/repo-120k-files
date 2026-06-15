// fichero 18401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18401;

Registro18401 crear_registro18401(int id) {
    Registro18401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
