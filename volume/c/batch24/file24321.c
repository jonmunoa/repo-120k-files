// fichero 24321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24321;

Registro24321 crear_registro24321(int id) {
    Registro24321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
