// fichero 23445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23445;

Registro23445 crear_registro23445(int id) {
    Registro23445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
