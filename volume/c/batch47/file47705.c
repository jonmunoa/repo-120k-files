// fichero 47705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47705;

Registro47705 crear_registro47705(int id) {
    Registro47705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
