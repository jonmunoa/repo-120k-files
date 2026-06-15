// fichero 18353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18353;

Registro18353 crear_registro18353(int id) {
    Registro18353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
