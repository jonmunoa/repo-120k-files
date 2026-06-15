// fichero 28137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28137;

Registro28137 crear_registro28137(int id) {
    Registro28137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
