// fichero 3005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3005;

Registro3005 crear_registro3005(int id) {
    Registro3005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
