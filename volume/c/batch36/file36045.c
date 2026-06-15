// fichero 36045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36045;

Registro36045 crear_registro36045(int id) {
    Registro36045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
