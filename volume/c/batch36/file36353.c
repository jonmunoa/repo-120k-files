// fichero 36353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36353;

Registro36353 crear_registro36353(int id) {
    Registro36353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
