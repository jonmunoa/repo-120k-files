// fichero 18821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18821;

Registro18821 crear_registro18821(int id) {
    Registro18821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
