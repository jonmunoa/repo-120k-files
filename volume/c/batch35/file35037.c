// fichero 35037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35037;

Registro35037 crear_registro35037(int id) {
    Registro35037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
