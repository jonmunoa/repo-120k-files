// fichero 8221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8221;

Registro8221 crear_registro8221(int id) {
    Registro8221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
