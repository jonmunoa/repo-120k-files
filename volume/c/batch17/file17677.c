// fichero 17677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17677;

Registro17677 crear_registro17677(int id) {
    Registro17677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
