// fichero 26325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26325;

Registro26325 crear_registro26325(int id) {
    Registro26325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
