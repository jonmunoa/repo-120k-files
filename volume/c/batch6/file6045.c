// fichero 6045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6045;

Registro6045 crear_registro6045(int id) {
    Registro6045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
