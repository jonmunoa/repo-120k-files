// fichero 20497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20497;

Registro20497 crear_registro20497(int id) {
    Registro20497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
