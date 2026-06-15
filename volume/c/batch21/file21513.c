// fichero 21513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21513;

Registro21513 crear_registro21513(int id) {
    Registro21513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
