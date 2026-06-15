// fichero 46849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46849;

Registro46849 crear_registro46849(int id) {
    Registro46849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
