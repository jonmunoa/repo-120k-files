// fichero 31893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31893;

Registro31893 crear_registro31893(int id) {
    Registro31893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
