// fichero 19645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19645;

Registro19645 crear_registro19645(int id) {
    Registro19645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
