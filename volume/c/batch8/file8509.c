// fichero 8509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8509;

Registro8509 crear_registro8509(int id) {
    Registro8509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
