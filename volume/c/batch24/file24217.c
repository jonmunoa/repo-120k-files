// fichero 24217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24217;

Registro24217 crear_registro24217(int id) {
    Registro24217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
