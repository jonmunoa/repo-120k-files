// fichero 37353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37353;

Registro37353 crear_registro37353(int id) {
    Registro37353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
