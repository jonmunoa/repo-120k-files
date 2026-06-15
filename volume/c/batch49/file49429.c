// fichero 49429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49429;

Registro49429 crear_registro49429(int id) {
    Registro49429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
