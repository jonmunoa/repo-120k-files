// fichero 46497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46497;

Registro46497 crear_registro46497(int id) {
    Registro46497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
