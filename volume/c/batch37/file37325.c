// fichero 37325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37325;

Registro37325 crear_registro37325(int id) {
    Registro37325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
