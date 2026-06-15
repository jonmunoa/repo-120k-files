// fichero 31333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31333;

Registro31333 crear_registro31333(int id) {
    Registro31333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
