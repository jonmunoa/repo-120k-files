// fichero 37017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37017;

Registro37017 crear_registro37017(int id) {
    Registro37017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
