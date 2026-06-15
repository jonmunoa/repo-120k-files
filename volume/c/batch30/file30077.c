// fichero 30077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30077;

Registro30077 crear_registro30077(int id) {
    Registro30077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
