// fichero 38733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38733;

Registro38733 crear_registro38733(int id) {
    Registro38733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
