// fichero 22001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22001;

Registro22001 crear_registro22001(int id) {
    Registro22001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
