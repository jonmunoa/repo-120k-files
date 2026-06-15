// fichero 49549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49549;

Registro49549 crear_registro49549(int id) {
    Registro49549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
