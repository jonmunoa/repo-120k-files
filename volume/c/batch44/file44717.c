// fichero 44717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44717;

Registro44717 crear_registro44717(int id) {
    Registro44717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
