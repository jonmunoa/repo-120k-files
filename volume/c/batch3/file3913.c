// fichero 3913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3913;

Registro3913 crear_registro3913(int id) {
    Registro3913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
