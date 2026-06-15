// fichero 5593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5593;

Registro5593 crear_registro5593(int id) {
    Registro5593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
