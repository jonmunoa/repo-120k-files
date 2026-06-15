// fichero 20557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20557;

Registro20557 crear_registro20557(int id) {
    Registro20557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
