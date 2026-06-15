// fichero 18049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18049;

Registro18049 crear_registro18049(int id) {
    Registro18049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
