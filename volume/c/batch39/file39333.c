// fichero 39333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39333;

Registro39333 crear_registro39333(int id) {
    Registro39333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
