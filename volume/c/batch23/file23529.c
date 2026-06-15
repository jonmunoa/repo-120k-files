// fichero 23529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23529;

Registro23529 crear_registro23529(int id) {
    Registro23529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
