// fichero 3505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3505;

Registro3505 crear_registro3505(int id) {
    Registro3505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
