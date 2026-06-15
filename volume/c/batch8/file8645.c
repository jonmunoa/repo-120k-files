// fichero 8645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8645;

Registro8645 crear_registro8645(int id) {
    Registro8645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
