// fichero 42657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42657;

Registro42657 crear_registro42657(int id) {
    Registro42657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
