// fichero 28085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28085;

Registro28085 crear_registro28085(int id) {
    Registro28085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
