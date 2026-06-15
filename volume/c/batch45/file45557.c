// fichero 45557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45557;

Registro45557 crear_registro45557(int id) {
    Registro45557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
