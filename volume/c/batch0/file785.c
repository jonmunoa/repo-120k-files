// fichero 785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro785;

Registro785 crear_registro785(int id) {
    Registro785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
