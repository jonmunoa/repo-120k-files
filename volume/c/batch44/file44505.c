// fichero 44505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44505;

Registro44505 crear_registro44505(int id) {
    Registro44505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
