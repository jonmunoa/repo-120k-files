// fichero 40357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40357;

Registro40357 crear_registro40357(int id) {
    Registro40357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
