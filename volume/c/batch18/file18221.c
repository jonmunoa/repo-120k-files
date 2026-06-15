// fichero 18221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18221;

Registro18221 crear_registro18221(int id) {
    Registro18221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
