// fichero 19785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19785;

Registro19785 crear_registro19785(int id) {
    Registro19785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
