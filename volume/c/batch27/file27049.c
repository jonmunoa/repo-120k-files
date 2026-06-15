// fichero 27049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27049;

Registro27049 crear_registro27049(int id) {
    Registro27049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
