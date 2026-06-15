// fichero 49733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49733;

Registro49733 crear_registro49733(int id) {
    Registro49733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
