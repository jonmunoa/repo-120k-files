// fichero 36321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36321;

Registro36321 crear_registro36321(int id) {
    Registro36321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
