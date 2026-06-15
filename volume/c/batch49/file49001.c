// fichero 49001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49001;

Registro49001 crear_registro49001(int id) {
    Registro49001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
