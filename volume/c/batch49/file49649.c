// fichero 49649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49649;

Registro49649 crear_registro49649(int id) {
    Registro49649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
