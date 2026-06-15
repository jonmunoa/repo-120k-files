// fichero 18329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18329;

Registro18329 crear_registro18329(int id) {
    Registro18329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
