// fichero 39837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39837;

Registro39837 crear_registro39837(int id) {
    Registro39837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
