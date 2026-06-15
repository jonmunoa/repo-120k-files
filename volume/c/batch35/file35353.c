// fichero 35353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35353;

Registro35353 crear_registro35353(int id) {
    Registro35353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
