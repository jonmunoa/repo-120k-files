// fichero 27733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27733;

Registro27733 crear_registro27733(int id) {
    Registro27733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
