// fichero 37577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37577;

Registro37577 crear_registro37577(int id) {
    Registro37577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
