// fichero 44645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44645;

Registro44645 crear_registro44645(int id) {
    Registro44645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
