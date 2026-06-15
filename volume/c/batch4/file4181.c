// fichero 4181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4181;

Registro4181 crear_registro4181(int id) {
    Registro4181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
