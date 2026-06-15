// fichero 41133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41133;

Registro41133 crear_registro41133(int id) {
    Registro41133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
