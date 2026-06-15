// fichero 31705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31705;

Registro31705 crear_registro31705(int id) {
    Registro31705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
