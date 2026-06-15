// fichero 40393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40393;

Registro40393 crear_registro40393(int id) {
    Registro40393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
