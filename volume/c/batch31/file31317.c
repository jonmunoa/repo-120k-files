// fichero 31317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31317;

Registro31317 crear_registro31317(int id) {
    Registro31317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
