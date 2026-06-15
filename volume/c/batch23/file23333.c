// fichero 23333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23333;

Registro23333 crear_registro23333(int id) {
    Registro23333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
