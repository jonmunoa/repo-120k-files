// fichero 22645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22645;

Registro22645 crear_registro22645(int id) {
    Registro22645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
