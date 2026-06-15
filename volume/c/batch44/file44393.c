// fichero 44393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44393;

Registro44393 crear_registro44393(int id) {
    Registro44393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
