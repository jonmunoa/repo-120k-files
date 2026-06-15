// fichero 8493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8493;

Registro8493 crear_registro8493(int id) {
    Registro8493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
