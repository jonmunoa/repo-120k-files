// fichero 5333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5333;

Registro5333 crear_registro5333(int id) {
    Registro5333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
