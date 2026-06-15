// fichero 30017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30017;

Registro30017 crear_registro30017(int id) {
    Registro30017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
