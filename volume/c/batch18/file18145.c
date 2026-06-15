// fichero 18145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18145;

Registro18145 crear_registro18145(int id) {
    Registro18145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
