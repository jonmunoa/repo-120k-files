// fichero 27885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27885;

Registro27885 crear_registro27885(int id) {
    Registro27885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
