// fichero 37817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37817;

Registro37817 crear_registro37817(int id) {
    Registro37817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
