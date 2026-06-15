// fichero 20505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20505;

Registro20505 crear_registro20505(int id) {
    Registro20505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
