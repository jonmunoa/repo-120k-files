// fichero 39113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39113;

Registro39113 crear_registro39113(int id) {
    Registro39113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
