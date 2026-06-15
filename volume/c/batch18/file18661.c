// fichero 18661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18661;

Registro18661 crear_registro18661(int id) {
    Registro18661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
