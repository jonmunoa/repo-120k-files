// fichero 42809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42809;

Registro42809 crear_registro42809(int id) {
    Registro42809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
