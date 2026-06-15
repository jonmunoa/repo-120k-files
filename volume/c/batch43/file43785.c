// fichero 43785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43785;

Registro43785 crear_registro43785(int id) {
    Registro43785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
