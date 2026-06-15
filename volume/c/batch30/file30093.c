// fichero 30093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30093;

Registro30093 crear_registro30093(int id) {
    Registro30093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
