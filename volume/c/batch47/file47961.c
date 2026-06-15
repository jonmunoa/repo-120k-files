// fichero 47961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47961;

Registro47961 crear_registro47961(int id) {
    Registro47961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
