// fichero 8333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8333;

Registro8333 crear_registro8333(int id) {
    Registro8333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
