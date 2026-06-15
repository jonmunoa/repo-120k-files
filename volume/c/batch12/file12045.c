// fichero 12045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12045;

Registro12045 crear_registro12045(int id) {
    Registro12045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
