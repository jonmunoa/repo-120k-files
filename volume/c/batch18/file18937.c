// fichero 18937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18937;

Registro18937 crear_registro18937(int id) {
    Registro18937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
