// fichero 31165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31165;

Registro31165 crear_registro31165(int id) {
    Registro31165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
