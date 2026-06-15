// fichero 40137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40137;

Registro40137 crear_registro40137(int id) {
    Registro40137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
