// fichero 18493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18493;

Registro18493 crear_registro18493(int id) {
    Registro18493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
