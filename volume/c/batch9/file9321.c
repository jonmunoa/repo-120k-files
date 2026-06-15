// fichero 9321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9321;

Registro9321 crear_registro9321(int id) {
    Registro9321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
