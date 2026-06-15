// fichero 47893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47893;

Registro47893 crear_registro47893(int id) {
    Registro47893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
