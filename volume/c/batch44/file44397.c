// fichero 44397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44397;

Registro44397 crear_registro44397(int id) {
    Registro44397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
