// fichero 47801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47801;

Registro47801 crear_registro47801(int id) {
    Registro47801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
