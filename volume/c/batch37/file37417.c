// fichero 37417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37417;

Registro37417 crear_registro37417(int id) {
    Registro37417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
