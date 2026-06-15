// fichero 49513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49513;

Registro49513 crear_registro49513(int id) {
    Registro49513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
