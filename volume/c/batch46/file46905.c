// fichero 46905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46905;

Registro46905 crear_registro46905(int id) {
    Registro46905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
