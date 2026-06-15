// fichero 8557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8557;

Registro8557 crear_registro8557(int id) {
    Registro8557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
