// fichero 36313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36313;

Registro36313 crear_registro36313(int id) {
    Registro36313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
