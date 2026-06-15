// fichero 34929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34929;

Registro34929 crear_registro34929(int id) {
    Registro34929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
