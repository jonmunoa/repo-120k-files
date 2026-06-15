// fichero 39049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39049;

Registro39049 crear_registro39049(int id) {
    Registro39049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
