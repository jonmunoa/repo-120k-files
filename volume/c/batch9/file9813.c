// fichero 9813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9813;

Registro9813 crear_registro9813(int id) {
    Registro9813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
