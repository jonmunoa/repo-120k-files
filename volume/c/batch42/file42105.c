// fichero 42105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42105;

Registro42105 crear_registro42105(int id) {
    Registro42105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
