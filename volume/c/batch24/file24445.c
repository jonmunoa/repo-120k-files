// fichero 24445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24445;

Registro24445 crear_registro24445(int id) {
    Registro24445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
