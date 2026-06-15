// fichero 45753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45753;

Registro45753 crear_registro45753(int id) {
    Registro45753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
