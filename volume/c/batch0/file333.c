// fichero 333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro333;

Registro333 crear_registro333(int id) {
    Registro333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
