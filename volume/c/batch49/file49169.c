// fichero 49169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49169;

Registro49169 crear_registro49169(int id) {
    Registro49169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
