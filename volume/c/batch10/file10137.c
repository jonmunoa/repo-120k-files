// fichero 10137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10137;

Registro10137 crear_registro10137(int id) {
    Registro10137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
