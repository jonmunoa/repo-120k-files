// fichero 21509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21509;

Registro21509 crear_registro21509(int id) {
    Registro21509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
