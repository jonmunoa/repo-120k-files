// fichero 18393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18393;

Registro18393 crear_registro18393(int id) {
    Registro18393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
