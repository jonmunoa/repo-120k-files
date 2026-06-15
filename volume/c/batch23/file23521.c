// fichero 23521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23521;

Registro23521 crear_registro23521(int id) {
    Registro23521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
