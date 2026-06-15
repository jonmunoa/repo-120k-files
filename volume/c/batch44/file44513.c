// fichero 44513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44513;

Registro44513 crear_registro44513(int id) {
    Registro44513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
