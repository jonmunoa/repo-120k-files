// fichero 36641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36641;

Registro36641 crear_registro36641(int id) {
    Registro36641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
