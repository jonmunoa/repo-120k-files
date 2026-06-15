// fichero 42789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42789;

Registro42789 crear_registro42789(int id) {
    Registro42789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
