// fichero 18205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18205;

Registro18205 crear_registro18205(int id) {
    Registro18205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
