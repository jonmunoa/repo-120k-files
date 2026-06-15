// fichero 35545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35545;

Registro35545 crear_registro35545(int id) {
    Registro35545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
