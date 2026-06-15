// fichero 39865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39865;

Registro39865 crear_registro39865(int id) {
    Registro39865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
