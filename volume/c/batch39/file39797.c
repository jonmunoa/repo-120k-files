// fichero 39797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39797;

Registro39797 crear_registro39797(int id) {
    Registro39797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
