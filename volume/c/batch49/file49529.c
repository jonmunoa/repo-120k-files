// fichero 49529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49529;

Registro49529 crear_registro49529(int id) {
    Registro49529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
