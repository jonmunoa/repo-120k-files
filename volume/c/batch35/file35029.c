// fichero 35029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35029;

Registro35029 crear_registro35029(int id) {
    Registro35029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
