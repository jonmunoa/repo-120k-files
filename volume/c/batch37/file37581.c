// fichero 37581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37581;

Registro37581 crear_registro37581(int id) {
    Registro37581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
