// fichero 30261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30261;

Registro30261 crear_registro30261(int id) {
    Registro30261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
