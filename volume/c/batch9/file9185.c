// fichero 9185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9185;

Registro9185 crear_registro9185(int id) {
    Registro9185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
