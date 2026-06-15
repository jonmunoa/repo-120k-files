// fichero 27789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27789;

Registro27789 crear_registro27789(int id) {
    Registro27789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
