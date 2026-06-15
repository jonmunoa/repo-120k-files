// fichero 14417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14417;

Registro14417 crear_registro14417(int id) {
    Registro14417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
