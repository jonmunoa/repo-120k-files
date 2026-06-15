// fichero 41113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41113;

Registro41113 crear_registro41113(int id) {
    Registro41113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
