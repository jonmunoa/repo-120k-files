// fichero 49061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49061;

Registro49061 crear_registro49061(int id) {
    Registro49061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
