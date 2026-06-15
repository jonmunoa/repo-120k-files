// fichero 18809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18809;

Registro18809 crear_registro18809(int id) {
    Registro18809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
