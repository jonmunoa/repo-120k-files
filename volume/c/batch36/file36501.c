// fichero 36501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36501;

Registro36501 crear_registro36501(int id) {
    Registro36501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
