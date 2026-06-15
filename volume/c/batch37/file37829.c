// fichero 37829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37829;

Registro37829 crear_registro37829(int id) {
    Registro37829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
