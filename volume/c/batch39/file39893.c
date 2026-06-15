// fichero 39893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39893;

Registro39893 crear_registro39893(int id) {
    Registro39893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
