// fichero 4645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4645;

Registro4645 crear_registro4645(int id) {
    Registro4645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
