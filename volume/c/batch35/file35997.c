// fichero 35997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35997;

Registro35997 crear_registro35997(int id) {
    Registro35997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
