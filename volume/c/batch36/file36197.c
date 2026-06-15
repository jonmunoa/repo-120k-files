// fichero 36197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36197;

Registro36197 crear_registro36197(int id) {
    Registro36197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
