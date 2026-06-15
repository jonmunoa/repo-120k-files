// fichero 36789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36789;

Registro36789 crear_registro36789(int id) {
    Registro36789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
