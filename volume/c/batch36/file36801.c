// fichero 36801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36801;

Registro36801 crear_registro36801(int id) {
    Registro36801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
