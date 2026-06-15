// fichero 38973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38973;

Registro38973 crear_registro38973(int id) {
    Registro38973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
