// fichero 20593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20593;

Registro20593 crear_registro20593(int id) {
    Registro20593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
