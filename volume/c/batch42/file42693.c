// fichero 42693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42693;

Registro42693 crear_registro42693(int id) {
    Registro42693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
