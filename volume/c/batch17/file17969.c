// fichero 17969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17969;

Registro17969 crear_registro17969(int id) {
    Registro17969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
