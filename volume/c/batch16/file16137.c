// fichero 16137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16137;

Registro16137 crear_registro16137(int id) {
    Registro16137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
