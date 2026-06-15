// fichero 28277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28277;

Registro28277 crear_registro28277(int id) {
    Registro28277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
