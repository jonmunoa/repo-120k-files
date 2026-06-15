// fichero 39773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39773;

Registro39773 crear_registro39773(int id) {
    Registro39773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
