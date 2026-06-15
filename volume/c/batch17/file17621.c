// fichero 17621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17621;

Registro17621 crear_registro17621(int id) {
    Registro17621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
