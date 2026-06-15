// fichero 37373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37373;

Registro37373 crear_registro37373(int id) {
    Registro37373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
