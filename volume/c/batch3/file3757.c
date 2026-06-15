// fichero 3757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3757;

Registro3757 crear_registro3757(int id) {
    Registro3757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
