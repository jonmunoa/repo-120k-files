// fichero 19713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19713;

Registro19713 crear_registro19713(int id) {
    Registro19713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
