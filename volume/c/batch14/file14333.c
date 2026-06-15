// fichero 14333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14333;

Registro14333 crear_registro14333(int id) {
    Registro14333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
