// fichero 23509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23509;

Registro23509 crear_registro23509(int id) {
    Registro23509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
