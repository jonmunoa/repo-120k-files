// fichero 26957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26957;

Registro26957 crear_registro26957(int id) {
    Registro26957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
