// fichero 3629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3629;

Registro3629 crear_registro3629(int id) {
    Registro3629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
