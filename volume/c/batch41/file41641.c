// fichero 41641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41641;

Registro41641 crear_registro41641(int id) {
    Registro41641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
