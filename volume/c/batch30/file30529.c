// fichero 30529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30529;

Registro30529 crear_registro30529(int id) {
    Registro30529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
