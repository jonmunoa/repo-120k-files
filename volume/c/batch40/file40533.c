// fichero 40533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40533;

Registro40533 crear_registro40533(int id) {
    Registro40533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
