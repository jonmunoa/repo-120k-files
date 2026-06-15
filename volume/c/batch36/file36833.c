// fichero 36833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36833;

Registro36833 crear_registro36833(int id) {
    Registro36833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
