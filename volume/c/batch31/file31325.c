// fichero 31325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31325;

Registro31325 crear_registro31325(int id) {
    Registro31325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
