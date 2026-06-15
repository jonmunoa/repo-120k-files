// fichero 8225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8225;

Registro8225 crear_registro8225(int id) {
    Registro8225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
