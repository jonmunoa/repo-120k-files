// fichero 26821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26821;

Registro26821 crear_registro26821(int id) {
    Registro26821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
