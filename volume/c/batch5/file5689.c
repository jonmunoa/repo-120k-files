// fichero 5689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5689;

Registro5689 crear_registro5689(int id) {
    Registro5689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
