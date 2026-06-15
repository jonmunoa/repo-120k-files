// fichero 36405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36405;

Registro36405 crear_registro36405(int id) {
    Registro36405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
