// fichero 12813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12813;

Registro12813 crear_registro12813(int id) {
    Registro12813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
