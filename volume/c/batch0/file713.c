// fichero 713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro713;

Registro713 crear_registro713(int id) {
    Registro713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
