// fichero 17505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17505;

Registro17505 crear_registro17505(int id) {
    Registro17505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
