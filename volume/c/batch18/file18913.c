// fichero 18913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18913;

Registro18913 crear_registro18913(int id) {
    Registro18913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
