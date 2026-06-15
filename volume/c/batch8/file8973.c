// fichero 8973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8973;

Registro8973 crear_registro8973(int id) {
    Registro8973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
