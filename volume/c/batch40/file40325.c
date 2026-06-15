// fichero 40325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40325;

Registro40325 crear_registro40325(int id) {
    Registro40325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
