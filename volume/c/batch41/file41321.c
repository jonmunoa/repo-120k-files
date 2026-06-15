// fichero 41321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41321;

Registro41321 crear_registro41321(int id) {
    Registro41321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
