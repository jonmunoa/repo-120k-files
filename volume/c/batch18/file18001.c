// fichero 18001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18001;

Registro18001 crear_registro18001(int id) {
    Registro18001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
