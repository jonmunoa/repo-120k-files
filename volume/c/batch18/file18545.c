// fichero 18545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18545;

Registro18545 crear_registro18545(int id) {
    Registro18545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
