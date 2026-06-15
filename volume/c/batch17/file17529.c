// fichero 17529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17529;

Registro17529 crear_registro17529(int id) {
    Registro17529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
