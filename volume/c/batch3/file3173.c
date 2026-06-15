// fichero 3173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3173;

Registro3173 crear_registro3173(int id) {
    Registro3173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
