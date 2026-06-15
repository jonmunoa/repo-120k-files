// fichero 31421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31421;

Registro31421 crear_registro31421(int id) {
    Registro31421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
