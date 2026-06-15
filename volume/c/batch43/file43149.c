// fichero 43149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43149;

Registro43149 crear_registro43149(int id) {
    Registro43149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
