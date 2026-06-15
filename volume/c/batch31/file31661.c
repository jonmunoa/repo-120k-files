// fichero 31661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31661;

Registro31661 crear_registro31661(int id) {
    Registro31661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
