// fichero 21325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21325;

Registro21325 crear_registro21325(int id) {
    Registro21325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
