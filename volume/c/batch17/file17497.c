// fichero 17497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17497;

Registro17497 crear_registro17497(int id) {
    Registro17497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
