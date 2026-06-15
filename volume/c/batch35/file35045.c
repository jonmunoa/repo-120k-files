// fichero 35045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35045;

Registro35045 crear_registro35045(int id) {
    Registro35045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
