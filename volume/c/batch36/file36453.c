// fichero 36453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36453;

Registro36453 crear_registro36453(int id) {
    Registro36453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
