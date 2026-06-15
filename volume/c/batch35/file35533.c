// fichero 35533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35533;

Registro35533 crear_registro35533(int id) {
    Registro35533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
