// fichero 39197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39197;

Registro39197 crear_registro39197(int id) {
    Registro39197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
