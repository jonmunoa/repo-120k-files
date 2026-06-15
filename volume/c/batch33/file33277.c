// fichero 33277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33277;

Registro33277 crear_registro33277(int id) {
    Registro33277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
