// fichero 36085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36085;

Registro36085 crear_registro36085(int id) {
    Registro36085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
