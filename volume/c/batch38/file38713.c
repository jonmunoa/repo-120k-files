// fichero 38713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38713;

Registro38713 crear_registro38713(int id) {
    Registro38713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
