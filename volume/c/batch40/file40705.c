// fichero 40705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40705;

Registro40705 crear_registro40705(int id) {
    Registro40705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
