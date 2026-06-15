// fichero 12453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12453;

Registro12453 crear_registro12453(int id) {
    Registro12453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
