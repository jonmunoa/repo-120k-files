// fichero 23577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23577;

Registro23577 crear_registro23577(int id) {
    Registro23577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
