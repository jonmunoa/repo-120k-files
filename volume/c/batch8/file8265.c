// fichero 8265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8265;

Registro8265 crear_registro8265(int id) {
    Registro8265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
