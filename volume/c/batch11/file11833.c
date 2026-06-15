// fichero 11833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11833;

Registro11833 crear_registro11833(int id) {
    Registro11833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
