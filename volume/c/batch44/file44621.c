// fichero 44621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44621;

Registro44621 crear_registro44621(int id) {
    Registro44621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
