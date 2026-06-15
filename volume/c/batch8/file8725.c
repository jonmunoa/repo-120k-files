// fichero 8725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8725;

Registro8725 crear_registro8725(int id) {
    Registro8725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
