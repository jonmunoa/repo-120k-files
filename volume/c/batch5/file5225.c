// fichero 5225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5225;

Registro5225 crear_registro5225(int id) {
    Registro5225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
