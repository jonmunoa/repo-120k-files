// fichero 509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro509;

Registro509 crear_registro509(int id) {
    Registro509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
