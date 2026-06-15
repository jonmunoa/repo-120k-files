// fichero 39689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39689;

Registro39689 crear_registro39689(int id) {
    Registro39689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
