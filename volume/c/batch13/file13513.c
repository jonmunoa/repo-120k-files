// fichero 13513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13513;

Registro13513 crear_registro13513(int id) {
    Registro13513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
