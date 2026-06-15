// fichero 17093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17093;

Registro17093 crear_registro17093(int id) {
    Registro17093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
