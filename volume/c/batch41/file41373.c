// fichero 41373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41373;

Registro41373 crear_registro41373(int id) {
    Registro41373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
