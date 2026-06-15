// fichero 39737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39737;

Registro39737 crear_registro39737(int id) {
    Registro39737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
