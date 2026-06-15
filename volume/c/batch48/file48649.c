// fichero 48649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48649;

Registro48649 crear_registro48649(int id) {
    Registro48649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
