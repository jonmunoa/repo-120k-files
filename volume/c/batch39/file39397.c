// fichero 39397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39397;

Registro39397 crear_registro39397(int id) {
    Registro39397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
