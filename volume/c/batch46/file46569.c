// fichero 46569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46569;

Registro46569 crear_registro46569(int id) {
    Registro46569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
