// fichero 5741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5741;

Registro5741 crear_registro5741(int id) {
    Registro5741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
