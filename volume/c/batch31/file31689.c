// fichero 31689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31689;

Registro31689 crear_registro31689(int id) {
    Registro31689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
