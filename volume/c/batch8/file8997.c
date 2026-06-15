// fichero 8997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8997;

Registro8997 crear_registro8997(int id) {
    Registro8997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
