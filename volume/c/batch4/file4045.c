// fichero 4045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4045;

Registro4045 crear_registro4045(int id) {
    Registro4045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
