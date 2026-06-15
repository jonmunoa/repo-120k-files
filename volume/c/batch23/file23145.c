// fichero 23145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23145;

Registro23145 crear_registro23145(int id) {
    Registro23145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
