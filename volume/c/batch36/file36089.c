// fichero 36089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36089;

Registro36089 crear_registro36089(int id) {
    Registro36089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
