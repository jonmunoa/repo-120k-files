// fichero 8689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8689;

Registro8689 crear_registro8689(int id) {
    Registro8689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
