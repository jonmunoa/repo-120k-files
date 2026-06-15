// fichero 44769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44769;

Registro44769 crear_registro44769(int id) {
    Registro44769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
