// fichero 31545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31545;

Registro31545 crear_registro31545(int id) {
    Registro31545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
