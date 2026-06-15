// fichero 31269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31269;

Registro31269 crear_registro31269(int id) {
    Registro31269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
