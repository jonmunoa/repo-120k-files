// fichero 18877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18877;

Registro18877 crear_registro18877(int id) {
    Registro18877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
