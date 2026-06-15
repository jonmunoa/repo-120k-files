// fichero 3649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3649;

Registro3649 crear_registro3649(int id) {
    Registro3649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
