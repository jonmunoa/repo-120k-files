// fichero 17573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17573;

Registro17573 crear_registro17573(int id) {
    Registro17573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
