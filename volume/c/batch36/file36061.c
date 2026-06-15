// fichero 36061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36061;

Registro36061 crear_registro36061(int id) {
    Registro36061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
