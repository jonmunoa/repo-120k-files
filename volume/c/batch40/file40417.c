// fichero 40417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40417;

Registro40417 crear_registro40417(int id) {
    Registro40417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
