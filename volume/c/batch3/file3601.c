// fichero 3601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3601;

Registro3601 crear_registro3601(int id) {
    Registro3601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
