// fichero 38949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38949;

Registro38949 crear_registro38949(int id) {
    Registro38949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
