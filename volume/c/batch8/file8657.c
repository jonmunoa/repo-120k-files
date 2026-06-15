// fichero 8657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8657;

Registro8657 crear_registro8657(int id) {
    Registro8657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
