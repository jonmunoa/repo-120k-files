// fichero 38029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38029;

Registro38029 crear_registro38029(int id) {
    Registro38029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
