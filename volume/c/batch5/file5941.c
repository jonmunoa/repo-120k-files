// fichero 5941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5941;

Registro5941 crear_registro5941(int id) {
    Registro5941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
