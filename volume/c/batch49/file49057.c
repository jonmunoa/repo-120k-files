// fichero 49057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49057;

Registro49057 crear_registro49057(int id) {
    Registro49057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
