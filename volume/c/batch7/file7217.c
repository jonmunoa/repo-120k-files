// fichero 7217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7217;

Registro7217 crear_registro7217(int id) {
    Registro7217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
