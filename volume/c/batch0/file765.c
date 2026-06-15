// fichero 765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro765;

Registro765 crear_registro765(int id) {
    Registro765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
