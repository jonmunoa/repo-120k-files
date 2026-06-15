// fichero 47593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47593;

Registro47593 crear_registro47593(int id) {
    Registro47593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
