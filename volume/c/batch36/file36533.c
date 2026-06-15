// fichero 36533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36533;

Registro36533 crear_registro36533(int id) {
    Registro36533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
