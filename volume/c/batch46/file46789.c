// fichero 46789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46789;

Registro46789 crear_registro46789(int id) {
    Registro46789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
