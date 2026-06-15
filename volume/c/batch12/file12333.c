// fichero 12333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12333;

Registro12333 crear_registro12333(int id) {
    Registro12333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
