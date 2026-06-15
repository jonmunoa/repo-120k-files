// fichero 35509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35509;

Registro35509 crear_registro35509(int id) {
    Registro35509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
