// fichero 47493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47493;

Registro47493 crear_registro47493(int id) {
    Registro47493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
