// fichero 42425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42425;

Registro42425 crear_registro42425(int id) {
    Registro42425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
