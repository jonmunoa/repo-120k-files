// fichero 9729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9729;

Registro9729 crear_registro9729(int id) {
    Registro9729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
