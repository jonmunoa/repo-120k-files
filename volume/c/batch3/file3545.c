// fichero 3545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3545;

Registro3545 crear_registro3545(int id) {
    Registro3545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
