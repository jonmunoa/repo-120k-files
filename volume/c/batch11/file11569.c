// fichero 11569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11569;

Registro11569 crear_registro11569(int id) {
    Registro11569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
