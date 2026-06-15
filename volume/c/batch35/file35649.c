// fichero 35649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35649;

Registro35649 crear_registro35649(int id) {
    Registro35649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
