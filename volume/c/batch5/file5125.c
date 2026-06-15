// fichero 5125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5125;

Registro5125 crear_registro5125(int id) {
    Registro5125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
