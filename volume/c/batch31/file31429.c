// fichero 31429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31429;

Registro31429 crear_registro31429(int id) {
    Registro31429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
