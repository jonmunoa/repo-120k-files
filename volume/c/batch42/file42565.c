// fichero 42565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42565;

Registro42565 crear_registro42565(int id) {
    Registro42565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
