// fichero 16581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16581;

Registro16581 crear_registro16581(int id) {
    Registro16581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
