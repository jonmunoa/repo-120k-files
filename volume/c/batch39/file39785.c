// fichero 39785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39785;

Registro39785 crear_registro39785(int id) {
    Registro39785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
