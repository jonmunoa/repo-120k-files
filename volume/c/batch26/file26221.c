// fichero 26221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26221;

Registro26221 crear_registro26221(int id) {
    Registro26221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
