// fichero 49073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49073;

Registro49073 crear_registro49073(int id) {
    Registro49073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
