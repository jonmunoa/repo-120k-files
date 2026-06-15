// fichero 36553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36553;

Registro36553 crear_registro36553(int id) {
    Registro36553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
