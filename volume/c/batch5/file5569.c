// fichero 5569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5569;

Registro5569 crear_registro5569(int id) {
    Registro5569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
