// fichero 233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro233;

Registro233 crear_registro233(int id) {
    Registro233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
