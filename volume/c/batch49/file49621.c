// fichero 49621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49621;

Registro49621 crear_registro49621(int id) {
    Registro49621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
