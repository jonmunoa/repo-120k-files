// fichero 49321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49321;

Registro49321 crear_registro49321(int id) {
    Registro49321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
