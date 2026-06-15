// fichero 36073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36073;

Registro36073 crear_registro36073(int id) {
    Registro36073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
