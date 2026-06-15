// fichero 34237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34237;

Registro34237 crear_registro34237(int id) {
    Registro34237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
