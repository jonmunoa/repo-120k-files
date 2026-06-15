// fichero 2545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2545;

Registro2545 crear_registro2545(int id) {
    Registro2545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
