// fichero 16621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16621;

Registro16621 crear_registro16621(int id) {
    Registro16621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
