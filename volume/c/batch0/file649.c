// fichero 649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro649;

Registro649 crear_registro649(int id) {
    Registro649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
