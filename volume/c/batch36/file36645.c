// fichero 36645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36645;

Registro36645 crear_registro36645(int id) {
    Registro36645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
