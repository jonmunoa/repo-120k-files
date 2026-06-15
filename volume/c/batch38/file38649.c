// fichero 38649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38649;

Registro38649 crear_registro38649(int id) {
    Registro38649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
