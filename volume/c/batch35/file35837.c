// fichero 35837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35837;

Registro35837 crear_registro35837(int id) {
    Registro35837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
