// fichero 49985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49985;

Registro49985 crear_registro49985(int id) {
    Registro49985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
