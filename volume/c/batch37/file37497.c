// fichero 37497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37497;

Registro37497 crear_registro37497(int id) {
    Registro37497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
