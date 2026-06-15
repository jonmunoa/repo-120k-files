// fichero 39861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39861;

Registro39861 crear_registro39861(int id) {
    Registro39861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
