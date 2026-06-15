// fichero 3181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3181;

Registro3181 crear_registro3181(int id) {
    Registro3181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
