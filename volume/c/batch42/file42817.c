// fichero 42817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42817;

Registro42817 crear_registro42817(int id) {
    Registro42817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
