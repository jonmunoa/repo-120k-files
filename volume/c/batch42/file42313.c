// fichero 42313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42313;

Registro42313 crear_registro42313(int id) {
    Registro42313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
