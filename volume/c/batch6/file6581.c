// fichero 6581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6581;

Registro6581 crear_registro6581(int id) {
    Registro6581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
