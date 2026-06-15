// fichero 39977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39977;

Registro39977 crear_registro39977(int id) {
    Registro39977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
