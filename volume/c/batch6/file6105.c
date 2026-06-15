// fichero 6105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6105;

Registro6105 crear_registro6105(int id) {
    Registro6105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
