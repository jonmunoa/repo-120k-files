// fichero 529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro529;

Registro529 crear_registro529(int id) {
    Registro529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
