// fichero 30877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30877;

Registro30877 crear_registro30877(int id) {
    Registro30877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
