// fichero 27609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27609;

Registro27609 crear_registro27609(int id) {
    Registro27609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
