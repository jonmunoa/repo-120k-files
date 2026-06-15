// fichero 30001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30001;

Registro30001 crear_registro30001(int id) {
    Registro30001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
