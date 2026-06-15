// fichero 18197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18197;

Registro18197 crear_registro18197(int id) {
    Registro18197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
