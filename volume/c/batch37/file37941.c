// fichero 37941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37941;

Registro37941 crear_registro37941(int id) {
    Registro37941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
