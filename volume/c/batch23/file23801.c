// fichero 23801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23801;

Registro23801 crear_registro23801(int id) {
    Registro23801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
