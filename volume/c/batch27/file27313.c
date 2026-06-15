// fichero 27313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27313;

Registro27313 crear_registro27313(int id) {
    Registro27313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
