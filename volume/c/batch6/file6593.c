// fichero 6593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6593;

Registro6593 crear_registro6593(int id) {
    Registro6593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
