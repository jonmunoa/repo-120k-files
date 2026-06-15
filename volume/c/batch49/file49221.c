// fichero 49221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49221;

Registro49221 crear_registro49221(int id) {
    Registro49221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
