// fichero 27961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27961;

Registro27961 crear_registro27961(int id) {
    Registro27961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
