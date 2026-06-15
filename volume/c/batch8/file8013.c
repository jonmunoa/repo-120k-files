// fichero 8013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8013;

Registro8013 crear_registro8013(int id) {
    Registro8013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
