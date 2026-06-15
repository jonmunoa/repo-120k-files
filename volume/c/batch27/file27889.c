// fichero 27889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27889;

Registro27889 crear_registro27889(int id) {
    Registro27889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
