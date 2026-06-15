// fichero 23285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23285;

Registro23285 crear_registro23285(int id) {
    Registro23285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
