// fichero 39681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39681;

Registro39681 crear_registro39681(int id) {
    Registro39681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
