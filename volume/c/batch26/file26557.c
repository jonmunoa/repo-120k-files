// fichero 26557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26557;

Registro26557 crear_registro26557(int id) {
    Registro26557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
