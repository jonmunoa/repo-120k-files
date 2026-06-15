// fichero 15793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15793;

Registro15793 crear_registro15793(int id) {
    Registro15793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
