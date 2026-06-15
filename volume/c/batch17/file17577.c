// fichero 17577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17577;

Registro17577 crear_registro17577(int id) {
    Registro17577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
