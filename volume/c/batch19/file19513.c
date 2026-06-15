// fichero 19513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19513;

Registro19513 crear_registro19513(int id) {
    Registro19513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
