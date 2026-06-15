// fichero 35557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35557;

Registro35557 crear_registro35557(int id) {
    Registro35557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
