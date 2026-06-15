// fichero 49117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49117;

Registro49117 crear_registro49117(int id) {
    Registro49117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
