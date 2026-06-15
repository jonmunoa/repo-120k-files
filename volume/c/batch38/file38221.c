// fichero 38221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38221;

Registro38221 crear_registro38221(int id) {
    Registro38221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
