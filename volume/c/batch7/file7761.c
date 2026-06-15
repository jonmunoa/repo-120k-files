// fichero 7761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7761;

Registro7761 crear_registro7761(int id) {
    Registro7761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
