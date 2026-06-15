// fichero 31721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31721;

Registro31721 crear_registro31721(int id) {
    Registro31721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
