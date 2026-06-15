// fichero 37841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37841;

Registro37841 crear_registro37841(int id) {
    Registro37841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
