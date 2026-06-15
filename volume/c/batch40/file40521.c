// fichero 40521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40521;

Registro40521 crear_registro40521(int id) {
    Registro40521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
