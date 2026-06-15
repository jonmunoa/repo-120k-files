// fichero 3645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3645;

Registro3645 crear_registro3645(int id) {
    Registro3645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
