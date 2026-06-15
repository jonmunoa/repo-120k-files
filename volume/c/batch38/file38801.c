// fichero 38801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38801;

Registro38801 crear_registro38801(int id) {
    Registro38801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
