// fichero 6989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6989;

Registro6989 crear_registro6989(int id) {
    Registro6989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
