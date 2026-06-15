// fichero 29417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29417;

Registro29417 crear_registro29417(int id) {
    Registro29417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
