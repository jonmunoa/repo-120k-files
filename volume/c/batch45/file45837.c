// fichero 45837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45837;

Registro45837 crear_registro45837(int id) {
    Registro45837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
