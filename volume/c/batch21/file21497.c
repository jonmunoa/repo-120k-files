// fichero 21497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21497;

Registro21497 crear_registro21497(int id) {
    Registro21497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
