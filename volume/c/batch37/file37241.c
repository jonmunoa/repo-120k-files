// fichero 37241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37241;

Registro37241 crear_registro37241(int id) {
    Registro37241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
