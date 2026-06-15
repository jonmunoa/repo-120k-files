// fichero 27517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27517;

Registro27517 crear_registro27517(int id) {
    Registro27517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
