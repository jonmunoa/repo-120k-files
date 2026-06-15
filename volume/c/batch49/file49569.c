// fichero 49569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49569;

Registro49569 crear_registro49569(int id) {
    Registro49569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
