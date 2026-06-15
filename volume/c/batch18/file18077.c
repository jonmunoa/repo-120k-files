// fichero 18077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18077;

Registro18077 crear_registro18077(int id) {
    Registro18077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
