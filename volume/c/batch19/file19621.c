// fichero 19621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19621;

Registro19621 crear_registro19621(int id) {
    Registro19621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
