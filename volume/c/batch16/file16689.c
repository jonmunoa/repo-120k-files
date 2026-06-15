// fichero 16689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16689;

Registro16689 crear_registro16689(int id) {
    Registro16689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
