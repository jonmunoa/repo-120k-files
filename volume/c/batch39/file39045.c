// fichero 39045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39045;

Registro39045 crear_registro39045(int id) {
    Registro39045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
