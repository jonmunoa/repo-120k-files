// fichero 35729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35729;

Registro35729 crear_registro35729(int id) {
    Registro35729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
