// fichero 35553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35553;

Registro35553 crear_registro35553(int id) {
    Registro35553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
