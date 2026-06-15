// fichero 35473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35473;

Registro35473 crear_registro35473(int id) {
    Registro35473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
