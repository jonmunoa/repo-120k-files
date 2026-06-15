// fichero 10505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10505;

Registro10505 crear_registro10505(int id) {
    Registro10505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
