// fichero 3529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3529;

Registro3529 crear_registro3529(int id) {
    Registro3529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
