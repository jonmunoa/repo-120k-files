// fichero 36001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36001;

Registro36001 crear_registro36001(int id) {
    Registro36001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
