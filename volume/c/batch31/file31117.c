// fichero 31117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31117;

Registro31117 crear_registro31117(int id) {
    Registro31117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
