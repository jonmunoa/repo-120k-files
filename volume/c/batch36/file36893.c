// fichero 36893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36893;

Registro36893 crear_registro36893(int id) {
    Registro36893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
