// fichero 3681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3681;

Registro3681 crear_registro3681(int id) {
    Registro3681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
