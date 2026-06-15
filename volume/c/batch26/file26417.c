// fichero 26417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26417;

Registro26417 crear_registro26417(int id) {
    Registro26417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
