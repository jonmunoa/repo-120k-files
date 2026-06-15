// fichero 18865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18865;

Registro18865 crear_registro18865(int id) {
    Registro18865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
