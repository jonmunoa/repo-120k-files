// fichero 36881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36881;

Registro36881 crear_registro36881(int id) {
    Registro36881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
