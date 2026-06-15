// fichero 40969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40969;

Registro40969 crear_registro40969(int id) {
    Registro40969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
