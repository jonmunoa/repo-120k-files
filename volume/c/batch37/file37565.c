// fichero 37565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37565;

Registro37565 crear_registro37565(int id) {
    Registro37565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
