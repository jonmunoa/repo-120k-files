// fichero 17821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17821;

Registro17821 crear_registro17821(int id) {
    Registro17821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
