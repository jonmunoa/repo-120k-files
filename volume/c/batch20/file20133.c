// fichero 20133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20133;

Registro20133 crear_registro20133(int id) {
    Registro20133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
