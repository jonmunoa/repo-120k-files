// fichero 31449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31449;

Registro31449 crear_registro31449(int id) {
    Registro31449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
