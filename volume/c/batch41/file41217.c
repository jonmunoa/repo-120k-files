// fichero 41217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41217;

Registro41217 crear_registro41217(int id) {
    Registro41217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
