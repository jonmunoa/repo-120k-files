// fichero 17117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17117;

Registro17117 crear_registro17117(int id) {
    Registro17117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
