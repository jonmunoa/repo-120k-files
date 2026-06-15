// fichero 49505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49505;

Registro49505 crear_registro49505(int id) {
    Registro49505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
