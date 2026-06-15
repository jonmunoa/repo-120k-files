// fichero 40649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40649;

Registro40649 crear_registro40649(int id) {
    Registro40649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
