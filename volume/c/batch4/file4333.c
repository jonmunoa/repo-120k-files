// fichero 4333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4333;

Registro4333 crear_registro4333(int id) {
    Registro4333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
