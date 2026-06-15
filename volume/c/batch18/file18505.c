// fichero 18505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18505;

Registro18505 crear_registro18505(int id) {
    Registro18505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
