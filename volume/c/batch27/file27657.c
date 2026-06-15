// fichero 27657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27657;

Registro27657 crear_registro27657(int id) {
    Registro27657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
