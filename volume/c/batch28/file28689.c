// fichero 28689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28689;

Registro28689 crear_registro28689(int id) {
    Registro28689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
