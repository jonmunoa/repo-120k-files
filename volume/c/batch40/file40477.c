// fichero 40477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40477;

Registro40477 crear_registro40477(int id) {
    Registro40477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
