// fichero 5809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5809;

Registro5809 crear_registro5809(int id) {
    Registro5809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
