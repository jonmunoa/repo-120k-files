// fichero 24841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24841;

Registro24841 crear_registro24841(int id) {
    Registro24841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
