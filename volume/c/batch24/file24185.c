// fichero 24185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24185;

Registro24185 crear_registro24185(int id) {
    Registro24185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
