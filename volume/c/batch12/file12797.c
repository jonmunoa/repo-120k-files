// fichero 12797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12797;

Registro12797 crear_registro12797(int id) {
    Registro12797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
