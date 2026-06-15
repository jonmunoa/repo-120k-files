// fichero 24077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24077;

Registro24077 crear_registro24077(int id) {
    Registro24077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
