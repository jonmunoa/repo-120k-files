// fichero 26621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26621;

Registro26621 crear_registro26621(int id) {
    Registro26621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
