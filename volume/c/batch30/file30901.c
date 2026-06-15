// fichero 30901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30901;

Registro30901 crear_registro30901(int id) {
    Registro30901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
