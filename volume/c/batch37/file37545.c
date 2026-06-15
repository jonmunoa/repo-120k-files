// fichero 37545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37545;

Registro37545 crear_registro37545(int id) {
    Registro37545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
