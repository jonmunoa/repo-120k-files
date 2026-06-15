// fichero 34593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34593;

Registro34593 crear_registro34593(int id) {
    Registro34593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
