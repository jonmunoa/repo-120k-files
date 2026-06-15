// fichero 8989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8989;

Registro8989 crear_registro8989(int id) {
    Registro8989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
