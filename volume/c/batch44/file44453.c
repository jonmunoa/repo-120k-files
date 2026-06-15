// fichero 44453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44453;

Registro44453 crear_registro44453(int id) {
    Registro44453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
