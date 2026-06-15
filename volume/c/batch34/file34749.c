// fichero 34749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34749;

Registro34749 crear_registro34749(int id) {
    Registro34749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
