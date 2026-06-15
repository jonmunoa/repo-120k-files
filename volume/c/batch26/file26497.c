// fichero 26497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26497;

Registro26497 crear_registro26497(int id) {
    Registro26497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
