// fichero 35393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35393;

Registro35393 crear_registro35393(int id) {
    Registro35393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
