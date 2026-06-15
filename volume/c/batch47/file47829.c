// fichero 47829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47829;

Registro47829 crear_registro47829(int id) {
    Registro47829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
