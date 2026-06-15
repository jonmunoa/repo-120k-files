// fichero 20645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20645;

Registro20645 crear_registro20645(int id) {
    Registro20645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
