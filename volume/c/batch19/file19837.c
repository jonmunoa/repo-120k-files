// fichero 19837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19837;

Registro19837 crear_registro19837(int id) {
    Registro19837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
