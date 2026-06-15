// fichero 38145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38145;

Registro38145 crear_registro38145(int id) {
    Registro38145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
