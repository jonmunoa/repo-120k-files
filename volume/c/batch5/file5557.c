// fichero 5557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5557;

Registro5557 crear_registro5557(int id) {
    Registro5557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
