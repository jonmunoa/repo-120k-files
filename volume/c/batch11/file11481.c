// fichero 11481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11481;

Registro11481 crear_registro11481(int id) {
    Registro11481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
