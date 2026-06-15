// fichero 48333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48333;

Registro48333 crear_registro48333(int id) {
    Registro48333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
