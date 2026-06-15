// fichero 39829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39829;

Registro39829 crear_registro39829(int id) {
    Registro39829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
