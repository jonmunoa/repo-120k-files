// fichero 41081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41081;

Registro41081 crear_registro41081(int id) {
    Registro41081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
