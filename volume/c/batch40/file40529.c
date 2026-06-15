// fichero 40529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40529;

Registro40529 crear_registro40529(int id) {
    Registro40529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
