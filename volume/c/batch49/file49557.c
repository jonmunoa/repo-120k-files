// fichero 49557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49557;

Registro49557 crear_registro49557(int id) {
    Registro49557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
