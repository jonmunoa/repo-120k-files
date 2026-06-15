// fichero 5497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5497;

Registro5497 crear_registro5497(int id) {
    Registro5497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
