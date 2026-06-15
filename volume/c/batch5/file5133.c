// fichero 5133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5133;

Registro5133 crear_registro5133(int id) {
    Registro5133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
