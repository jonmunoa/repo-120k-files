// fichero 37809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37809;

Registro37809 crear_registro37809(int id) {
    Registro37809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
