// fichero 37153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37153;

Registro37153 crear_registro37153(int id) {
    Registro37153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
