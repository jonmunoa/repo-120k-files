// fichero 39913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39913;

Registro39913 crear_registro39913(int id) {
    Registro39913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
