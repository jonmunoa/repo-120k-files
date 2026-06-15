// fichero 42089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42089;

Registro42089 crear_registro42089(int id) {
    Registro42089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
