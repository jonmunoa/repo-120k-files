// fichero 49037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49037;

Registro49037 crear_registro49037(int id) {
    Registro49037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
