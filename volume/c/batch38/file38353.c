// fichero 38353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38353;

Registro38353 crear_registro38353(int id) {
    Registro38353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
