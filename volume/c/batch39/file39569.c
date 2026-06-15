// fichero 39569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39569;

Registro39569 crear_registro39569(int id) {
    Registro39569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
