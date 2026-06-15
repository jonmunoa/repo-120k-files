// fichero 7333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7333;

Registro7333 crear_registro7333(int id) {
    Registro7333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
