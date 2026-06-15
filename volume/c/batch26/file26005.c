// fichero 26005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26005;

Registro26005 crear_registro26005(int id) {
    Registro26005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
