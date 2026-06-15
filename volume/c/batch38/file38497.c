// fichero 38497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38497;

Registro38497 crear_registro38497(int id) {
    Registro38497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
