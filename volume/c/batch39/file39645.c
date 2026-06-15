// fichero 39645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39645;

Registro39645 crear_registro39645(int id) {
    Registro39645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
