// fichero 12561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12561;

Registro12561 crear_registro12561(int id) {
    Registro12561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
