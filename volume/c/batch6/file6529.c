// fichero 6529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6529;

Registro6529 crear_registro6529(int id) {
    Registro6529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
