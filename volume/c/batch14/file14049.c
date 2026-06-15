// fichero 14049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14049;

Registro14049 crear_registro14049(int id) {
    Registro14049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
